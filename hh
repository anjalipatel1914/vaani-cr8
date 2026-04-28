{
  "name": "vaani-cr8-website",
  "private": true,
  "version": "1.0.0",
  "type": "module",
  "scripts": {
    "dev": "vite",
    "build": "vite build",
    "preview": "vite preview"
  },
  "dependencies": {
    "react": "^18.2.0",
    "react-dom": "^18.2.0",
    "lucide-react": "^0.460.0"
  },
  "devDependencies": {
    "vite": "^5.0.0"
  }
}<!doctype html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>VAANI CR8</title>
  </head>
  <body>
    <div id="root"></div>
    <script type="module" src="/src/main.jsx"></script>
  </body>
</html>import React from "react";
import ReactDOM from "react-dom/client";
import App from "./App.jsx";

ReactDOM.createRoot(document.getElementById("root")).render(
  <React.StrictMode>
    <App />
  </React.StrictMode>
);import React from "react";

export default function App() {
  return (
    <div style={{
      minHeight: "100vh",
      background: "black",
      color: "white",
      padding: "40px",
      fontFamily: "Arial"
    }}>
      <h1 style={{ color: "#3b82f6", fontSize: "40px" }}>
        VAANI CR8
      </h1>

      <p>Your Imagination, Our Creation</p>
      <p>Premium 3D Printing & Services</p>

      <hr style={{ margin: "20px 0" }} />

      <h2>Services</h2>
      <ul>
        <li>Industrial Prototypes</li>
        <li>Custom Gifts</li>
        <li>Home Decor Items</li>
        <li>3D Models & Designs</li>
      </ul>

      <hr style={{ margin: "20px 0" }} />

      <h2>Contact</h2>
      <p>📞 9173822776</p>
      <p>📧 vaanicr8@gmail.com</p>
    </div>
  );
}
